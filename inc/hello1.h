#include <linux/list.h>
#include <linux/ktime.h>

struct l_struct {
	struct list_head list;
	ktime_t timestamp_start;
	ktime_t timestamp_end;
};

void print_hello(unsigned int repeat_count);

