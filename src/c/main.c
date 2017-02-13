#include <pebble.h>
#include "main_menu.h"
#include "content_menu.h"
                                                          
int main(void)
{
//    Layer * clock_layer = get_clock_layer();
   init_main_menu();
   init_content_menu();
   
   app_event_loop();
   
   clear_content_menu();
   clear_main_menu();
}