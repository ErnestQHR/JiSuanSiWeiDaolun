//
// Created by 仇皓然 on 24-11-21.
//
#include <stdio.h>
#include <string.h>

// 尺寸结构体
typedef struct {
    float length;
    float width;
    float waist;
} Size;

// 成交时间结构体
typedef struct {
    int year;
    int month;
    int day;
} Date;

// 商品结构体
typedef struct {
    char name[50];
    float price;
    int quantity;
    Size size;
    float totalPayment;
    Date soldDate;
} Product;

// 商品列表
#define MAX_PRODUCTS 100
Product productList[MAX_PRODUCTS];
int productCount = 0;

// 功能菜单
void displayMenu() {
    printf("\n====== 淘宝已买商品管理系统 ======\n");
    printf("1. 显示全部商品\n");
    printf("2. 新建商品\n");
    printf("3. 查找商品\n");
    printf("4. 排序商品\n");
    printf("5. 退出\n");
    printf("请输入功能编号：");
}

// 显示所有商品
void displayAllProducts() {
    if (productCount == 0) {
        printf("暂无商品信息！\n");
        return;
    }
    printf("\n当前商品列表：\n");
    for (int i = 0; i < productCount; i++) {
        printf("商品编号: %d\n", i + 1);
        printf("商品名称: %s\n", productList[i].name);
        printf("单价: %.2f\n", productList[i].price);
        printf("数量: %d\n", productList[i].quantity);
        printf("尺寸: 长=%.2f, 宽=%.2f, 腰围=%.2f\n",
               productList[i].size.length, productList[i].size.width, productList[i].size.waist);
        printf("实付款: %.2f\n", productList[i].totalPayment);
        printf("成交时间: %d-%02d-%02d\n\n",
               productList[i].soldDate.year, productList[i].soldDate.month, productList[i].soldDate.day);
    }
}

// 新建商品
void addProduct() {
    if (productCount >= MAX_PRODUCTS) {
        printf("商品列表已满，无法添加新商品！\n");
        return;
    }
    Product p;
    printf("请输入商品名称: ");
    scanf("%s", p.name);
    printf("请输入单价: ");
    scanf("%f", &p.price);
    printf("请输入数量: ");
    scanf("%d", &p.quantity);
    printf("请输入尺寸 (长 宽 腰围): ");
    scanf("%f %f %f", &p.size.length, &p.size.width, &p.size.waist);
    printf("请输入实付款: ");
    scanf("%f", &p.totalPayment);
    printf("请输入成交时间 (年 月 日): ");
    scanf("%d %d %d", &p.soldDate.year, &p.soldDate.month, &p.soldDate.day);

    productList[productCount++] = p;
    printf("商品已添加！\n");
}

// 查找商品
void findProduct() {
    printf("\n请输入查找方式：\n");
    printf("1. 根据名称\n");
    printf("2. 根据单价\n");
    printf("3. 根据成交时间\n");
    printf("请输入选项：");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        char keyword[50];
        printf("请输入商品名称关键词: ");
        scanf("%s", keyword);
        printf("\n查找结果:\n");
        for (int i = 0; i < productCount; i++) {
            if (strstr(productList[i].name, keyword)) {
                printf("商品名称: %s, 单价: %.2f, 数量: %d, 实付款: %.2f\n",
                       productList[i].name, productList[i].price, productList[i].quantity, productList[i].totalPayment);
            }
        }
    } else if (choice == 2) {
        float targetPrice;
        printf("请输入目标单价: ");
        scanf("%f", &targetPrice);
        printf("\n查找结果:\n");
        for (int i = 0; i < productCount; i++) {
            if (productList[i].price == targetPrice) {
                printf("商品名称: %s, 单价: %.2f, 数量: %d, 实付款: %.2f\n",
                       productList[i].name, productList[i].price, productList[i].quantity, productList[i].totalPayment);
            }
        }
    } else if (choice == 3) {
        Date targetDate;
        printf("请输入目标成交时间 (年 月 日): ");
        scanf("%d %d %d", &targetDate.year, &targetDate.month, &targetDate.day);
        printf("\n查找结果:\n");
        for (int i = 0; i < productCount; i++) {
            if (productList[i].soldDate.year == targetDate.year &&
                productList[i].soldDate.month == targetDate.month &&
                productList[i].soldDate.day == targetDate.day) {
                printf("商品名称: %s, 单价: %.2f, 数量: %d, 实付款: %.2f\n",
                       productList[i].name, productList[i].price, productList[i].quantity, productList[i].totalPayment);
            }
        }
    } else {
        printf("无效选项！\n");
    }
}

// 排序商品
void sortProductsByPrice() {
    if (productCount == 0) {
        printf("暂无商品信息，无法排序！\n");
        return;
    }

    for (int i = 0; i < productCount - 1; i++) {
        for (int j = 0; j < productCount - i - 1; j++) {
            if (productList[j].price > productList[j + 1].price) {
                Product temp = productList[j];
                productList[j] = productList[j + 1];
                productList[j + 1] = temp;
            }
        }
    }
    printf("商品已按单价升序排序！\n");
}

// 主函数
int main() {
    int choice;
    do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayAllProducts();
                break;
            case 2:
                addProduct();
                break;
            case 3:
                findProduct();
                break;
            case 4:
                sortProductsByPrice();
                break;
            case 5:
                printf("退出程序！\n");
                break;
            default:
                printf("无效选项，请重新输入！\n");
        }
    } while (choice != 5);

    return 0;
}