#include <iostream>
#include <string>
using namespace std;
class Invoice
{
public:
Invoice ( string number, string desc, int quant, int price )
{
setPartNumber (number);
setPartDescription (desc);
setQuantity (quant);
setPricePerItem (price);
}
void setPartNumber (string number)
{
partNumber = number;
}
string getPartNumber ()
{
return partNumber;
}
void setPartDescription (string desc)
{
partDescription = desc;
}
string getPartDescription()
{
return partDescription;
}
void setQuantity (int quant)
{
if (quant >= 0) quantity = quant;
else quantity = 0;
}
int getQuantity()
{
return quantity;
}
void setPricePerItem(int price)
{
if (price >= 0) pricePerItem = price;
else pricePerItem = 0;
}
int getPricePerItem()
{
return pricePerItem;
}
int getInvoiceAmount()
{
return quantity * pricePerItem;
}
private:
string partNumber;
string partDescription;
int quantity;
int pricePerItem;
};
int main()
{
Invoice invoice1 ("1", "first invoice", 30, 10);
Invoice invoice2 ("2", "second invoice", -40, -4);
cout << "Invoice amount for " << invoice1.getPartDescription() << ", which is " << 
invoice1.getQuantity() << " parts " <<
invoice1.getPricePerItem() << " each is " << invoice1.getInvoiceAmount() << endl;
cout << "Invoice amount for " << invoice2.getPartDescription() << ", which is " << 
invoice2.getQuantity() << " parts " <<
invoice2.getPricePerItem() << " each is " << invoice2.getInvoiceAmount() << endl;
}