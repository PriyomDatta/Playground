/*Author:- Priyom Datta*/
/*Content:- The following file contain information about the module */

/*Own include*/
#include"../../inc/ext_inc.h"
#include"../../inc/own_inc.h" 


/*
int get_intf_0(void);
void get_intf_1(char *);
unsigned char get_intf_2(char);

int prov_intf_0(void);
void prov_intf_1(char *);
unsigned char prov_intf_2(char);
*/

/*Module specific source code implementation*/
int process_1(void){
    int var_0 = get_intf_0();
    char var_2;
    get_intf_1(&var_2);
    switch(var_2){
        case '+': var_0 += 2;
                break;
        case '-': var_0 -= 2;
                break;
        case '*': var_0 *= 2;
                break;
        case '/': var_0 /= 2;
                break;
        default: /*Invalid operation do nothing*/
                break;
    }

    return var_0;
}
void process_2(void){

}
void process_3(void){

}
void process_4(void){

}