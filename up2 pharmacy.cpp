#include <string>

using namespace std;
// Global declaration
double price;
double totalAmount;

void Bill(double price) // void doesn't return anything
{
    totalAmount=price+totalAmount;
}
double invoice()//returns total invoice
{
    return totalAmount;
}

int main() {

    do {
        int category;
         cout<<"\n\n\t\t\t    Pharmacy Management System \n";
	    cout<<"\t\t==================================================\n\n";
	    cout<<"\t\t--------------------------------------------------\n";
        cout << "\t\t||\tWelcome to the Pharmacy!\t ||\n" ;
        cout << "\t\t||\tWhat are you looking for?\t ||\n" ;
        cout << "\t\t||\t1. Medicine\t\t\t ||\n" ;
        cout << "\t\t||\t2. Skincare\t\t\t ||\n" ;
        cout << "\t\t||\t3. Makeup\t\t\t ||\n" ;
        cout << "\t\t||\t4. Supplements\t\t\t ||\n" ;
        cout << "\t\t||\t5. Medical Equipment\t\t ||\n" ;
        cout << "\t\t||\t6. Snacks\t\t\t ||\n" ;
        cout << "\t\t||\t7. Baby Care\t\t\t ||\n" ;
        cout << "\t\t||\t8. Exit\t\t\t\t ||\n" ;
        cout<<"\t\t--------------------------------------------------\n";
        cout<<"\t\t--------------------------------------------------\n";
        cout << "Enter your choice (1-8): ";
       
        cin >> category;

        switch (category) {
                case 1: {
                int symptom;
                cout<<"\t\t--------------------------------------------------\n";
                cout<<"\t\t--------------------------------------------------\n";
                cout << "\t\t||\tSelect the symptoms:"<<endl;
                cout << "\t\t||\t1. Fever\t\t\t ||"<< endl;
                cout << "\t\t||\t2. Cough\t\t\t ||"<< endl;
                cout << "\t\t||\t3. Flu\t\t\t\t ||"<< endl;
                cout << "\t\t||\t4. Upset Stomach\t\t ||"<< endl;
                cout << "\t\t||\t5. Vomitting\t\t\t ||"<< endl;
                cout << "\t\t||\t6. Pain\t\t\t\t ||"<< endl;
                cout << "\t\t||\t7. Eye Infection\t\t ||"<< endl;
                cout << "\t\t||\t8. Exit\t\t\t\t ||" <<endl;
                cout<<"\t\t--------------------------------------------------\n";
                cout<<"\t\t--------------------------------------------------\n";
                cout << "\tEnter your choice (1-8): ";
                cin >> symptom;

                string medicine;
                double price;

                switch (symptom) {
                    case 1:
                        medicine = "Paracetamol";
                        price = 450;
                        break;
                    case 2:
                        medicine = "Acefyl";
                        price = 80;
                        break;
                    case 3:
                        medicine = "Arinac";
                        price = 110;
                        break;
                    case 4:
                        medicine = "Flagyl";
                        price = 550;
                        break;
                    case 5:
                        medicine = "Gravinate";
                        price = 200;
                        break;
                    case 6:
                        medicine = "Panadol";
                        price = 130;
                        break;
                    case 7:
                        medicine = "Eye drops";
                        price = 350;
                        break;
                    case 8:
                        break; // Exit the medicine section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout<<"\t\t------------------------------------\n";
             cout << "\t\t|| You need\t[ " << medicine <<" ]\n"<<"\t\t|| Price: \t Rs." << price << "\t\t"<< endl;
             cout<<"\t\t------------------------------------\n";
                Bill(price);
                break;
            }
        
            case 2: {
                int skinType;
                cout<<"\t\t--------------------------------------------------\n";
                cout<<"\t\t--------------------------------------------------\n";
                cout << "\t\t || Select your skin type:\t||" << endl;
                cout << "\t\t || 1. Oily skin\t\t||"<<endl;
                cout<<"\t\t || 2. Normal skin\t\t||" << endl;
                cout << "\t\t || 3. Combination skin\t\t||" << endl;
                cout << "\t\t || 4. Dry-dehydrated skin\t||" << endl;
                cout << "\t\t || 5. Sensitive skin\t\t||" << endl;
                cout << "\t\t || 6. Acne-prone skin\t\t||" << endl;
                cout << "\t\t || 7. Mature skin\t\t||" << endl;
                cout << "\t\t || 8. Exit\t\t\t||" << endl;
                cout<<"\t\t--------------------------------------------------\n";
                cout<<"\t\t--------------------------------------------------\n";
                cout << "Enter your choice (1-8): ";

                cin >> skinType;

                string skincare;
                double price;

                switch (skinType) {
                    case 1:
                        skincare = "Neutrogena Hydro Boost Gel";
                        price = 1400;
                        break;
                    case 2:
                        skincare = "cosrx hyaluronic acid moisturizer";
                        price = 5000;
                        break;
                    case 3:
                        skincare = "Cetaphil moisturizing lotion";
                        price = 3000;
                        break;
                    case 4:
                        skincare = "Cerave intense hydration cream";
                        price = 6000;
                        break;
                    case 5:
                        skincare = "aveeno daily lotion";
                        price = 2800;
                        break;
                    case 6:
                        skincare = "Cerave acne prone lotion";
                        price = 4500;
                        break;
                    case 7:
                        skincare = "inkey face hyaluronic acid lotion";
                        price = 2400;
                        break;
                    case 8:
                        break; // Exit the skincare section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout<<"\t\t------------------------------------\n";
             cout << "\t\t|| You need\t[ " << skincare <<" ]\n"<<"\t\t|| Price: \t Rs." << price << "\t\t"<< endl;
             cout<<"\t\t------------------------------------\n";
                Bill(price);
                break;
            }
        
            case 3: {
                int Choice;
                
                cout<<"\t\t------------------------------------\n";
                cout<<"\t\t------------------------------------\n";
                cout<<"\t\t || *Female Make up products\t||"<<endl;
                cout<<"\t\t || 1. Eye Products\t\t||"<<endl;
                cout<<"\t\t || 2. Lip Products\t\t||"<<endl;
                cout<<"\t\t || 3. Face Products\t\t||"<<endl;
                cout<<"\t\t------------------------------------\n";
                cout<<"\t\t------------------------------------\n";
                cin>>Choice;
                
                

                string makeupoptions;
                double price;
                

                switch (Choice){
                    case 1:
                    makeupoptions = "Rare beauty mascara";
                    price = 5000;
                    break;
                    case 2:
                    makeupoptions = "nyx lip oil";
                    price = 1500;
                    break;
                    case 3:
                    makeupoptions = "pixi blush";
                    price = 4000;
                    break;
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;

            }
            cout<<"\t\t------------------------------------\n";
             cout << "\t\t|| You need\t[ " << makeupoptions <<" ]\n"<<"\t\t|| Price: \t Rs." << price << "\t\t"<< endl;
             cout<<"\t\t------------------------------------\n";
                Bill(price);
                break;

    }                  
                        

            case 4: {
                cout<<"\t\t------------------------------------\n";
                cout<<"\t\t------------------------------------\n";
                cout << "\t\t ||Common types of supplements:\t|| " << endl;
                cout << "\t\t ||1. Multivitamins\t\t||" << endl;
                cout << "\t\t ||2. Minerals\t\t\t||" << endl;
                cout << "\t\t ||3. Biotin\t\t\t||" << endl;
                cout << "\t\t ||4. Omega\t\t\t||" << endl;
                cout << "\t\t ||5. Collagen\t\t\t||" << endl;
                cout << "\t\t ||6. Vitamin D3\t\t||" << endl;
                cout << "\t\t ||7. Exit\t\t\t||" << endl;
                cout<<"\t\t------------------------------------\n";
                cout<<"\t\t------------------------------------\n";

                int supplementType;
                cout << "Enter your choice (1-7): ";
                cin >> supplementType;

                string supplement;
                double price;

                switch (supplementType) {
                    case 1:
                        supplement = "Abott surbex X, 30 Ct";
                        price = 294;
                        break;
                    case 2:
                        supplement = "CaC- 1000 Plus (orange)";
                        price = 234;
                        break;
                    case 3:
                        supplement = "Natural Factors Biotin";
                        price = 2590;
                        break;
                    case 4:
                        supplement = "Blackmores Omega Daily";
                        price = 4550;
                        break;
                    case 5:
                        supplement = "Webbers Natural Collagen30";
                        price = 9500;
                        break;
                    case 6:
                        supplement = "Dan-D 50000 IU";
                        price = 340;
                        break;
                    case 7:
                        break; // Exit the supplements section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout<<"\t\t------------------------------------\n";
             cout << "\t\t|| You need\t[ " << supplement <<" ]\n"<<"\t\t|| Price: \t Rs." << price << "\t\t"<< endl;
             cout<<"\t\t------------------------------------\n";
                Bill(price);
                break;
            }
            case 5: {
                cout<<"\t\t------------------------------------\n";
                cout<<"\t\t------------------------------------\n";
                cout << "\t\t ||Available medical equipment:\t ||" << endl;
                cout<<"\t\t ||1. Syringes\t\t\t ||" << endl;
                cout<<"\t\t ||2. Crutches\t\t\t ||" << endl;
                cout<<"\t\t ||3. Thermometer\t\t ||" << endl;
                cout<<"\t\t ||4. Blood Glucose Monitor\t ||" << endl;
                cout<<"\t\t ||5. Saniplast \t\t ||" << endl;
                cout<<"\t\t ||6. Heating Pad\t\t ||" << endl;
                cout<<"\t\t ||7. Knee Cap\t\t\t ||" << endl;
                cout<<"\t\t ||8. Blood Pressure Monitor\t ||" << endl;
                cout<<"\t\t ||9. Wheelchair\t\t ||" << endl;
                cout<<"\t\t ||10. Exit\t\t\t ||" << endl;
                cout<<"\t\t------------------------------------\n";
                cout<<"\t\t------------------------------------\n";

                int equipmentType;
                cout << "Enter your choice (1-10): ";
                cin >> equipmentType;

                string equipment;
                double price;

                switch (equipmentType) {
                    case 1:
                        equipment = "Syringes";
                        price = 550;
                        break;
                    case 2:
                        equipment = "Crutches";
                        price = 1999.99;
                        break;
                    case 3:
                        equipment = "Thermometer";
                        price = 600;
                        break;
                    case 4:
                        equipment = "Blood Glucose Monitors";
                        price = 2370;
                        break;
                    case 5:
                        equipment = "Saniplast";
                        price = 20;
                        break;
                    case 6:
                        equipment = "Heating Pad";
                        price = 7000;
                        break;
                    case 7:
                        equipment = "Knee Cap";
                        price = 570;
                        break;
                    case 8:
                        equipment = "Blood Pressure Monitor";
                        price = 3200;
                        break;
                    case 9:
                        equipment = "Wheelchair";
                        price = 10000;
                        break;
                    case 10:
                        break; // Exit the medical equipment section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout<<"\t\t------------------------------------\n";
             cout << "\t\t|| You need\t[ " << equipment <<" ]\n"<<"\t\t|| Price: \t Rs." << price << "\t\t"<< endl;
             cout<<"\t\t------------------------------------\n";
                Bill(price);
                break;
            }

         case 6: { 
                 cout<<"\t\t------------------------------------\n";
                cout<<"\t\t------------------------------------\n";
                 cout <<"\t\t ||Available snacks:\t\t||"<<endl;
                 cout<<"\t\t ||1. Lays\t\t\t||"<<endl;
                 cout<<"\t\t ||2. Kurkure\t\t\t||"<<endl;
                 cout<<"\t\t ||3. Kurleez\t\t\t||"<<endl;
                 cout<<"\t\t ||4. Cheetos\t\t\t||"<<endl;
                 cout<<"\t\t ||5. Dairymilk\t\t\t||"<<endl;
                 cout<<"\t\t ||6. Oreos\t\t\t||"<<endl;
                 cout<<"\t\t ||7. Prince biscuit\t\t||"<<endl;
                 cout<<"\t\t ||8. Slanty\t\t\t||"<<endl;
                 cout<<"\t\t ||9. Ding dong bubble\t\t||"<<endl;
                 cout<<"\t\t ||10.Tuc biscuit\t\t||"<<endl;
                 cout<<"\t\t ||11.Rio biscuit\t\t||"<<endl;
                 cout<<"\t\t ||12.Exit\t\t\t||" << endl;
                  cout<<"\t\t------------------------------------\n";
                cout<<"\t\t------------------------------------\n";

                int snackType;
                cout << "Enter your choice (1-12): ";
                cin >> snackType;

                string snacks;
                double price;

                switch (snackType) {
                    case 1:
                        snacks = "Lays";
                        price = 50;
                        break;
                    case 2:
                        snacks = "Kurkure";
                        price = 30;
                        break;
                    case 3:
                        snacks = "Kurleez";
                        price = 30;
                        break;
                    case 4:
                        snacks = "Cheetos";
                        price = 100;
                        break;
                    case 5:
                        snacks = "Dairymilk";
                        price = 100;
                        break;
                    case 6:
                        snacks = "Oreo";
                        price = 40;
                        break;
                    case 7:
                        snacks = "Prince biscuit";
                        price = 50;
                        break;
                    case 8:
                        snacks ="Slanty";
                        price = 60;
                        break;
                    case 9:
                        snacks = "Ding dong bubble";
                        price = 5;
                        break;
                    case 10:
                        snacks = "Tuc biscuit";
                        price = 50;
                        break;
                    case 11:
                    	snacks ="Rio biscuit";
                    	price = 40;

                    case 12:
                        break; // Exit the snacks list 
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout<<"\t\t------------------------------------\n";
                cout << "\t\t|| You need\t[ " << snacks <<" ]\n"<<"\t\t|| Price: \t Rs." << price << "\t\t"<< endl;
                cout<<"\t\t------------------------------------\n";
                Bill(price);
                break;  
 	
 } 
case 7: {
                cout<<"\t\t------------------------------------\n";
                cout<<"\t\t------------------------------------\n";
                cout <<"\t\t ||Common types of baby care items:\t" << endl;
                cout<<"\t\t ||1. Pampers\t\t\t ||" << endl;
                cout<<"\t\t ||2. Cerelac\t\t\t ||" << endl;
                cout<<"\t\t ||3. BF1\t\t\t ||" << endl;
                cout<<"\t\t ||4. Feeder\t\t\t ||" << endl;
                cout<<"\t\t ||5. Pacifier\t\t\t ||" << endl;
                cout<<"\t\t ||6. Bibs\t\t\t ||" << endl;
                cout<<"\t\t ||7. Baby Oil\t\t\t ||" << endl;
                cout<<"\t\t ||8. Baby Lotion\t\t ||" << endl;
                cout<<"\t\t ||9. Baby Shampoo\t\t ||" << endl;
                cout<<"\t\t ||10. Baby Powder\t\t ||" << endl;
                cout<<"\t\t ||11. Baby Wipes\t\t ||" << endl;
                cout<<"\t\t ||12. Exit\t\t\t ||" << endl;
                cout<<"\t\t------------------------------------\n";
                cout<<"\t\t------------------------------------\n";

                int babyCare;
                cout << "Enter your choice (1-12): ";
                cin >> babyCare;

                string supplements;
                double price;

                switch (babyCare) {
                    case 1:
                        supplements = "Pampers";
                        price = 2600;
                        break;
                    case 2:
                        supplements = "Cerelac";
                        price = 250;
                        break;
                    case 3:
                        supplements = "BF1";
                        price = 1800;
                        break;
                    case 4:
                        supplements = "Feeder";
                        price = 300;
                        break;
                    case 5:
                        supplements = "Pacifier";
                        price = 270;
                        break;
                    case 6:
                        supplements = "Bibs";
                        price = 700;
                        break;
                    case 7:
                        supplements = "Baby Oil";
                        price = 1000;
                        break;
                    case 8:
                        supplements = "Baby Lotion";
                        price = 950;
                        break;
                    case 9:
                        supplements = "Baby Shampoo";
                        price = 1200;
                        break;
                    case 10:
                        supplements = "Baby Powder";
                        price = 800;
                        break;
                    case 11:
                        supplements = "Baby Wipes";
                        price = 550;
                        break;
                    case 12:
                        break; // Exit the supplements section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout<<"\t\t------------------------------------\n";
                cout << "\t\t|| You need\t[ " << supplements <<" ]\n"<<"\t\t|| Price: \t Rs." << price << "\t\t"<< endl;
                cout<<"\t\t------------------------------------\n";
                Bill(price);
                break;
            }
            

            default:
                cout << "Invalid choice!" << endl;
                continue;
        }

        char choice;
        
        cout << "Do you want anything else? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            cout<<"Type of customer"<<endl ;
            cout<<"1. Pickup"<<endl ;
            cout<<"2. Deliver to address"<<endl;
        int choice;
        cin >> choice;
        string email,address,phone;
            if (choice ==1){
                
            cout<<"\t\t-------------------------------------------------------------\n";
            cout <<"\t\t||Thank you for using the Pharmacy system!\t\t  \n\t\t||Your total amount is :[ RS." << invoice() <<" ]\t\t\t"<< endl;
            cout<<"\t\t-------------------------------------------------------------\n";
            return 0;

            }
            else if(choice==2)
            {   
                cout<<"Enter your email :";
                cin>>email;
                cout<<"Enter your Address :";
                cin>>address;
                cout<<"Enter your Phone number :";
                cin>>phone;
                
                double Deliverycharges=150;
                Bill(Deliverycharges);
                
            cout<<"\t\t-------------------------------------------------------------\n";
            cout <<"\t\t||Thank you for using the Pharmacy system!\t\t  \n\t\tYour total amount is :[ RS." << invoice() <<"  With Delivery"<<" ] \t "<<"\t\t"<< endl;
            cout<<"\t\t-------------------------------------------------------------\n";
            cout<<"\t\t||WILL BE DELIVIRED AT\t"<<endl;
            cout<<"\t\t||EMAIL : "<<email<<"\t"<<"\n"<<"\t\t||Address :"<<address<<"\t"<<"\n\t\t||Phone Number :"<<phone<<"\t"<<endl; 
            cout<<"\t\t-------------------------------------------------------------\n";
            return 0;
            }
        }

     }
     while (true);

    return 0;
}
