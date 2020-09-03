#include<iostream>
#include"Invoice.h"
using namespace std;


int main()
{
    Invoice ob("Pencil","Stationery",12,5);
    ob.setPartno("Eraser");
    ob.setPartde("Stationery");
    ob.setquantity(10);
    ob.setPrice(5);
    string productnumber=ob.getPartno();
    string productdescription=ob.getPartde();
    int q=ob.getQuantity();
    int p=ob.getPrice();
    int a=ob.getInvoiceAmount();
    cout<<"The total amount is "<<a;
    return 0;
}
