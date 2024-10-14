#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Item
{
    string name;
    double price;
    int quantity;
};


class VendingMachine
{
        private:
        vector <Item> Items;
        int numItems;
        int quan;

        public:

        void fetch_input()
        {
          
          cout << "Enter the number of items: ";
          cin >> numItems;
           while(numItems > 0)
             {
               
               cout << "Enter details of item" << endl;
               Item item;
               cout << "Enter name" << endl;
               cin >> item.name ;
               cout << "Enter price" << endl;
               cin >> item.price;
               cout << "Enter quantity" << endl;
               cin >> item.quantity;
               quan  =  item.quantity;
               if(item.price < 0 || item.quantity < 0)
               {
                 cout << "Invalid input please give right inputs" << endl;
                 continue;
               } 
               if(quan > numItems)
               {
                 cout<< "Overload " << endl;
                 break;
               }
               Items.push_back(item);
               numItems = numItems - item.quantity;
             }
                
 
        }
       void display_item()
      {

        if (Items.empty()) {
            cout << "No items to display." << endl;
            return;
        }
        for(int i = 0; i < Items.size(); i++)
          {
            cout << "\nDisplaying Details of Item "  << endl;
            cout<< "Item Name: " << Items[i].name << endl;
            cout<< "Item Price: " << Items[i].price << endl;
            cout<< "Item Quantity: " << Items[i].quantity << endl;
          }
      }

      void search(string itemname, double price, int quan)
       {
          cout << "\nSearching for items in vending Machine" << endl;
         bool found = false;
          for(int i = 0; i < Items.size(); i ++)
            {
              if(Items[i].name == itemname && Items[i].quantity >= quan )
              {
                found = true;
              cout << "Item is found" << endl;
              cout << "Price Paid : " << price << endl;
              cout << "Actual Price of item: " << Items[i].price << endl;
              cout << "Total change " << price - Items[i].price * quan << endl;
              cout << "Slot: " << i + 1 << endl;
              Items[i].quantity =  Items[i].quantity - quan;
              numItems = numItems + quan;
              if(Items[i].quantity == 0)
              Items.erase(Items.begin() + i);
                
              cout << "\n\nUpdated list of Vending Machine"<<endl;
              display_item();
              break;
              }

              else if(Items[i].name == itemname && Items[i].quantity < quan)
              {
                found = true;
                cout << "Item is found but not in right quantity" << endl;
                cout << "Quantity of item available:" << Items[i].quantity << endl;
                cout << "Price Paid : " << price << endl;
                cout << "Actual Price of item: " << Items[i].price << endl;
                cout << "Amount to be paid: " << Items[i].price * 
                     Items[i].quantity << endl;
                cout << "Total change " << price - Items[i].price * 
                 Items[i].quantity << endl;
                cout << "Slot: " << i + 1 << endl;
                Items[i].quantity = 0;
                numItems = numItems + Items[i].quantity;
                if(Items[i].quantity == 0)
                Items.erase(Items.begin() + i);
                cout << "\n\nUpdated list of Vending Machine"<<endl;
                display_item();
                break;
              }
            
            }
         if(!found)
           cout << "Item is unavailable";
       }
};
int main() {
  
   VendingMachine obj;
   obj.fetch_input();
   obj.display_item(); 
   obj.search("Egg", 250, 4);
}
