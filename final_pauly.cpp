// Final Project
// This program is a guide to the thrift shops of New Orleans based on location 
    // and categorization of resale store.
// Emily Pauly
// December 9, 2019

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const int UptownThrift = 1,
   UptownConsignment = 2,
   UptownVintage = 3,
   MidCityThrift = 4,
   MidCityConsignment = 5,
   MidCityVintage = 6,
   WestBankThrift = 7,
   WestBankConsignment = 8,
   WestBankVintage = 9,
   Quit = 10;

    int userChoice, menuSelection;

    cout << "A Guide to New Orleans Thrift Shops" << endl;
    cout << "___________________________________" << endl;
    cout << "1. Thrift Shops in Uptown" << endl;
    cout << "2. Consignment Shops in Uptown" << endl;
    cout << "3. Vintage Clothing Shops in Uptown" << endl;
    cout << "4. Thrift Shops in Mid City" << endl;
    cout << "5. Consignment Shops in MidCity" << endl;
    cout << "6. Vintage Clothing Shops in Midcity" << endl;
    cout << "7. Thrift Shops on the Westbank" << endl;
    cout << "8. Consignment Shops on the Westbank" << endl;
    cout << "9. Vintage Clothing Shops on the Westbank" << endl;
    cout << "10. Quit" << endl;
    cout << "Enter the number in which area you would like to see the thrift shops for:" << endl;

    while(!(cin >> menuSelection) ||
        menuSelection > Quit)
    {
        cout << "\nInvalid selection. Please enter a valid selection";
        cin.clear();
        cin.ignore(1200, '\n');
    }

    if (menuSelection != Quit)
    {
        switch(menuSelection)
        {
            case 1:
                cout << "\nNo Fleas Market: Resale shop for clothing & home goods, with a portion of proceeds donated to local animal shelters." << endl; 
                cout << "4228 Magazine St, New Orleans, LA 70115\n" << endl;
                break;
            case 2:
                cout << "\nGlue: Secondhand apparel & accessories store with vintage items from the 1950s to current-day selections." << endl; 
                cout << "8206 Oak St, New Orleans, LA 70118\n\n";
                cout << "Buffalo Exchange: Hip chain that buys, sells, trades trendy vintage & used clothing & accessories for men & women." << endl; 
                cout << "4119 Magazine St, New Orleans, LA 70115\n\n";
                cout << "Swap Boutique: Consignment shop known for selling upscale women's apparel & designer accessories." << endl;
                cout << "5530 Magazine St, New Orleans, LA 70115\n\n";
                break;
            case 3:
                cout << "\nFunky Monkey: Store with an eclectic offering of new, used & vintage clothing, plus costumes & funky accessories." << endl; 
                cout << "3127 Magazine St, New Orleans, LA 70115\n\n";
                cout << "White Roach: We're an independent record store featuring diverse and unique preloved & new vinyl, handpicked vintage clothing for men and women, handmade crafts, patches, and all sorts of unexpected things." << endl; 
                cout << "5704 Magazine St, New Orleans, LA 70115\n\n";
                cout << "Century Girl Vintage: Cozy shop with a whimsical vibe offering a curated selection of women's vintage & designer clothing." << endl; 
                cout << "2023 Magazine St, New Orleans, LA 70130\n\n";
                break;
            case 4:
                cout << "\nRestoration Thrift: 2025 St Claude Ave, New Orleans, LA 70116\n\n";
                cout << "Goodwill: Long-standing nonprofit chain with a range of pre-owned clothing, furniture, housewares & more. "; 
                cout << "3400 Tulane Ave #1000, New Orleans, LA 70119\n\n" << endl;
                break;
            case 5:
                cout << "\nNo Rules Fashion: Unpretentious consignment store selling a wide range of new & used women's clothing, shoes & more." << endl; 
                cout << "927 Royal St, New Orleans, LA 70116\n\n" << endl;
                break;
            case 6:
                cout << "\nGinaware Costumes and Clothing: 4429 Bienville St, New Orleans, LA 70119\n" << endl;
                break;
            case 7:
                cout << "\nRed, White, and Blue: 5728 Jefferson Hwy, New Orleans, LA 70123\n\n";
                cout << "Goodwill: Long-standing nonprofit chain with a range of pre-owned clothing, furniture, housewares & more.\n"; 
                cout << "875 Manhattan Blvd, Harvey, LA 70058\n\n";
                cout << "Second Chance Thrift Store and Flea Market: Seller with salvaged construction items such as cabinets, windows & sinks, plus secondhand apparel.\n"; 
                cout << "1519 Franklin St, Gretna, LA 70053\n" << endl;
                break;
            case 8:
                cout << "\nNone in this area, try again!\n" << endl;
                break;
            case 9:
                cout << "\nNone in this area, try again!\n" << endl;
                break;
        }

        if (userChoice == 1, 2, 3, 4, 5, 6, 7, 8, 9)
        {
            cout << "Happy Shopping!\n" << endl;
        }
        else
            cout << "Thank you for using this Thrift Shop Guide to Nola" << endl;
    }
        return 0;
}