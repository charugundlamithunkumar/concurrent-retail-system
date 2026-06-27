#include <sys/types.h>
#include <sys/sem.h>
#include <sys/ipc.h>

#ifndef MY_MACROS_H
#define MY_MACROS_H

#define MAX_PRODUCTS 30
#define MAX_CART_SIZE 25
#define ADMIN_FILE "./data/Admin_User"
#define CUSTOMER_FILE "./data/Customer_User"
#define PRODUCT_FILE "./data/Product_List"
#define ADMIN_LOG_FILE "./logs/admin/Admin_Log.txt"

union semun
{
    int val;
    struct semid_ds *buf;
    unsigned short int *array;
};

#endif
