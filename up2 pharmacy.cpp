#include <iostream>
#include <string>

using namespace std;

int main() {
    double totalAmount = 0.0;

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
                cout << "Select the symptoms:\n1. Fever\n2. Cough\n3. Flu\n4. Upset Stomach\n5. Vomitting\n6. Pain\n7. Eye Infection\n8. Exit" << endl;
                cout << "Enter your choice (1-7): ";
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

                cout << "You need " << medicine << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;
            }
        
            case 2: {
                int skinType;
                cout << "Select your skin type:\n1. Oily skin\n2. Normal skin\n3. Combination skin\n4. Dry-dehydrated skin\n"
                     << "5. Sensitive skin\n6. Acne-prone skin\n7. Mature skin\n8. Exit" << endl;
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

                cout << "You need " << skincare << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;
            }
        
            case 3: {
                int Choice;
                
                
                cout<<"1.Female Make up products\n";
                cout<<" 1. Eye Products\n";
                cout<<" 2. Lip Products\n";
                cout<<" 3. Face Products\n";
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
             cout << "You need " << makeupoptions << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;

    }                  
                        

            case 4: {
                cout << "Common types of supplements:\n1. Multivitamins\n2. Minerals\n3. Biotin \n"
                     << "4. Omega\n5. Collagen\n6. Vitamin D3\n7. Exit" << endl;

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

                cout << "You need " << supplement << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;
            }
            case 5: {
                cout << "Available medical equipment:\n1. Syringes\n2. Crutches\n3. Thermometer\n"
                     << "4. Blood Glucose Monitor\n5. Saniplast \n6. Heating Pad\n7. Knee Cap\n8. Blood Pressure Monitor\n"
                     << "9. Wheelchair\n10. Exit" << endl;

                int equipmentType;
                cout << "Enter your choice (1-11): ";
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

                cout << "You need " << equipment << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;
            }

         case 6: { 
                 cout << "Available snacks:\n1. lays\n2. kurkure\n3. kurleez\n"
                     << "4. cheetos\n5. dairymilk\n6. oreo\n7. PRINCE BUISCIT\n8. slanty\n"
                     << "9. ding dong bubble\n10. tuc biscuit\n11. rio biscuit\n12.Exit" << endl;

                int snackType;
                cout << "Enter your choice (1-12): ";
                cin >> snackType;

                string snacks;
                double price;

                switch (snackType) {
                    case 1:
                        snacks = "LAYS";
                        price = 50.99;
                        break;
                    case 2:
                        snacks = "kurkure";
                        price = 30.99;
                        break;
                    case 3:
                        snacks = "kurleez";
                        price = 30.99;
                        break;
                    case 4:
                        snacks = "cheetos";
                        price = 1499.99;
                        break;
                    case 5:
                        snacks = "dairymilk";
                        price = 20.99;
                        break;
                    case 6:
                        snacks = "oreo";
                        price = 40.99;
                        break;
                    case 7:
                        snacks = "prince BISCUIT";
                        price = 3499.99;
                        break;
                    case 8:
                        snacks ="slanty";
                        price = 799.99;
                        break;
                    case 9:
                        snacks = "ding dong bubble";
                        price = 2999.99;
                        break;
                    case 10:
                        snacks = "tuc biscuit";
                        price = 1599.99;
                        break;
                    case 11:
                    	snacks ="rio biscuit";
                    	price = 30.99;
                    case 12:
                        break; // Exit the snacks list 
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout << "You need " << snacks << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;  
 	
 } 
case 7: {
                cout << "Common types of baby care items:\n1. Pampers\n2. Cerelac\n3. BF1\n"
                     << "4. Feeder\n5. Pacifier\n6. Bibs\n7. Baby Oil\n8. Baby Lotion\n9. Baby Shampoo\n10. Baby Powder\n11. Baby Wipes\n12. Exit" << endl;

                int babyCare;
                cout << "Enter your choice (1-12): ";
                cin >> babyCare;

                string supplement;
                double price;

                switch (babyCare) {
                    case 1:
                        supplement = "Pampers";
                        price = 2600;
                        break;
                    case 2:
                        supplement = "Cerelac";
                        price = 250;
                        break;
                    case 3:
                        supplement = "BF1";
                        price = 1800;
                        break;
                    case 4:
                        supplement = "Feeder";
                        price = 300;
                        break;
                    case 5:
                        supplement = "Pacifier";
                        price = 270;
                        break;
                    case 6:
                        supplement = "Bibs";
                        price = 700;
                        break;
                    case 7:
                        supplement = "Baby Oil";
                        price = 1000;
                        break;
                    case 8:
                        supplement = "Baby Lotion";
                        price = 950;
                        break;
                    case 9:
                        supplement = "Baby Shampoo";
                        price = 1200;
                        break;
                    case 10:
                        supplement = "Baby Powder";
                        price = 800;
                        break;
                    case 11:
                        supplement = "Baby Wipes";
                        price = 550;
                        break;
                    case 12:
                        break; // Exit the supplements section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout << "You need " << supplement << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;
            }
            

            case 8: {
                cout << "Thank you for using the Pharmacy system! Your total amount is: $" << totalAmount << endl;
                return 0;
            }

            default:
                cout << "Invalid choice!" << endl;
                continue;
        }

        char choice;
        cout << "Do you want anything else? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
             cout<<"\t\t--------------------------------------------------\n";
             cout<<"\t\t--------------------------------------------------\n";
            cout << "Thank you for using the Pharmacy system! Your total amount is   :  Rs." << totalAmount << endl;
            return 0;
        }

     }
     while (true);

    return 0;
}


