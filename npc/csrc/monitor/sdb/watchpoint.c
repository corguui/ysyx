#include <cassert>
#include <cstdio>
#include <sdb.h>
#include <string.h>


WP wp_pool[NR_WP] = {};
static WP *wp_head = NULL, *wp_tail = NULL,           // watch point list
          *free_ = NULL;            // free nodes list

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

void free_wp(int no){
  //the head
  if (wp_head->NO == no) {
  //only one menber
    if (wp_tail == wp_head) {
      wp_tail = NULL;
    while(free_->next==NULL)
    {
    	free_=free_->next;
    }
    WP *p=free_;
    free_=wp_head;
    free_->next=p;
    wp_head=NULL;
    }
  //the menbers >1
    else
    {
    while(free_->next==NULL)
    {
    	free_=free_->next;
    }
    WP *p=free_;
    free_=wp_head;
    wp_head=wp_head->next;//要放在 free_->next=p  前面
    free_->next=p;
    
    }
    
    return;
  }
  //the no is not the head 
  else
    {
    WP *pre = wp_head;
    while (pre->next && pre->next->NO != no) {
      pre = pre->next;
    }
    if (pre->next) {
    //the no is the tail
      if (pre->next == wp_tail) {
        wp_tail = pre;
	while(free_->next==NULL)
        {
    	free_=free_->next;
        }
	WP *wp=pre->next;
        pre->next = wp->next;
        WP *p=free_;
        free_=wp;
        free_->next=p;

      }
    //not the tail
      else{
      WP *wp = pre->next;              
      while(free_->next==NULL)
      {
    	free_=free_->next;
      }
      pre->next = wp->next;
      WP *p=free_;
      free_=wp;
      free_->next=p;
      }
  }
  else
  {
      printf("Fail to free!\n");
      assert(0);
  }
  }
}

WP* new_wp() {
  if (free_) {
    WP *wp_new = free_;
    if (free_->next) {
      free_ = free_->next;
    }
    wp_new->next = NULL;
    if (wp_head == NULL) {
      wp_head = wp_new;
      wp_tail = wp_new;
    }
    else
    {
      wp_tail->next = wp_new;
      wp_tail = wp_new;
    }
    return wp_new;
  }
  else
  {
    printf("No more free watch point nodes in wp_pool\n");
    return free_;
  }
}

// return false if val change
bool check_wp() {
  if (!wp_head) {
    return true;
  }
  WP *cur = wp_head;
  bool success = true;
  while (cur) {
    if (cur->val != expr(cur->args, &success)) {
      if (!success) {
        printf("Bad expression\n");
        return false;
      }
      printf("NO. %d watchpoint's value changed\n", cur->NO);
      return false;
    }
    cur = cur->next;
  }
  return true;
}

void watchpoint_display() {
  if (wp_head == NULL) {
    printf("No watchpoint\n");
  }
  else
  {
    WP *cur = wp_head;
    while (cur) {
      printf("NO.%d expression: %s  , init_value= %d\n", cur->NO, cur->args, cur->val);
      cur = cur->next;
    }
  }
}

void create_wp(char* args)
{
  bool success = true;
  WP *wp_new = new_wp();
  strcpy(wp_new->args,args);
  wp_new->val = expr(args, &success);
  if (!success) {
    printf("Bad expression\n");
    }

}
