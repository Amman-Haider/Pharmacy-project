#include<iostream>
#include <string>
#include <random>
#include <ctime>
#include <chrono>

using namespace std;
// Global declaration
//double price = 0.0;
double totalAmount = 0.0;
//arrays
string BasicMedsPrescription[] = { "Paracetamol", "Acefyl", "Arinac", "Flagyl", "Gravinate", "Panadol", "Eye Drops" };
string SkinCarePrescription[] = { "Neutrogena Hydro Boost Gel", "Cosrx Hyaluronic Acid Moisturizer", "Cetaphil Moisturizing Lotion", "Cerave Intense Hydration Cream", "Aveeno Daily Lotion", "Cerave Acne Prone Lotion", "Inkey Face Hyaluronic Acid Lotion" };
string MakeUpProducts[] = { "Rare Beauty Mascara", "Nyx Lip Oil", "Pixi Blush" };
string SupplementPrescription[] = { "Abott surbex X, 30 Ct" ,"CaC- 1000 Plus (orange)" ,"Natural Factors Biotin" ,"Blackmores Omega Daily" ,"Webbers Natural Collagen30" ,"Dan-D 50000 IU" };
string MedicalEquipentType[] = { "Syringes", "Crutches", "Thermometer" , "Blood Glucose Monitors","Saniplast","Heating Pad","Knee Cap","Blood Pressure Monitor", "Wheelchair" };
string SnackTypes[] = { "Lays" ,"Kurkure" ,"Kurleez" ,"Cheetos" ,"Dairymilk" , "Oreo" ,"Prince biscuit" ,"Slanty" ,"Ding dong bubble" ,"Tuc biscuit","Rio biscuit" };
string BabyCareProducts[] = { "Pampers" , "Cerelac" , "BF1" ,"Feeder" ,"Pacifier" ,"Bibs" ,"Baby Oil" ,"Baby Lotion" ,"Baby Shampoo" ,"Baby Powder" ,"Baby Wipes" };

//Arrays for different categories
string categories[] = {
    "Medicine",
    "Skincare",
    "Makeup",
    "Supplements",
    "Medical Equipment",
    "Snacks",
    "Baby Care",
    "Exit"
};

string itemTypes[][12] = {
    { "Paracetamol", "Acefyl", "Arinac", "Flagyl", "Gravinate", "Panadol", "Eye Drops" },
    { "Neutrogena Hydro Boost Gel", "Cosrx Hyaluronic Acid Moisturizer", "Cetaphil Moisturizing Lotion", "Cerave Intense Hydration Cream", "Aveeno Daily Lotion", "Cerave Acne Prone Lotion", "Inkey Face Hyaluronic Acid Lotion" },
    { "Rare Beauty Mascara", "Nyx Lip Oil", "Pixi Blush" },
    { "Abott surbex X, 30 Ct" ,"CaC- 1000 Plus (orange)" ,"Natural Factors Biotin" ,"Blackmores Omega Daily" ,"Webbers Natural Collagen30" ,"Dan-D 50000 IU" },
    { "Syringes", "Crutches", "Thermometer" , "Blood Glucose Monitors","Saniplast","Heating Pad","Knee Cap","Blood Pressure Monitor", "Wheelchair" },
    { "Lays" ,"Kurkure" ,"Kurleez" ,"Cheetos" ,"Dairymilk" , "Oreo" ,"Prince biscuit" ,"Slanty" ,"Ding dong bubble" ,"Tuc biscuit","Rio biscuit" },
    { "Pampers" , "Cerelac" , "BF1" ,"Feeder" ,"Pacifier" ,"Bibs" ,"Baby Oil" ,"Baby Lotion" ,"Baby Shampoo" ,"Baby Powder" ,"Baby Wipes" }
};

double itemPrices[][12] = {
    { 450, 80, 110, 550, 200, 130, 350 },
    { 1400, 5000, 3000, 6000, 2800, 4500, 2400 },
    { 5000, 1500, 4000 },
    { 294, 234, 2590, 4550, 9500, 340 },
    { 550, 1999.99, 600, 2370, 20, 7000, 570, 3200, 10000 },
    { 50, 30, 30, 100, 100, 40, 50, 60, 5, 50, 40 },
    { 2600, 250, 1800, 300, 270, 700, 1000, 950, 1200, 800, 550 }
};




// we also used switched statement in this code that it is also possible with that 





/*void BasicMeds(int symptom, double& totalAmount) {
    string medicine;
    switch (symptom) {
    case 1:
        medicine = BasicMedsPrescription[0];
        price = 450;
        break;
    case 2:
        medicine = BasicMedsPrescription[1];
        price = 80;
        break;
    case 3:
        medicine = BasicMedsPrescription[2];
        price = 110;
        break;
    case 4:
        medicine = BasicMedsPrescription[3];
        price = 550;
        break;
    case 5:
        medicine = BasicMedsPrescription[4];
        price = 200;
        break;
    case 6:
        medicine = BasicMedsPrescription[5];
        price = 130;
        break;
    case 7:
        medicine = BasicMedsPrescription[6];
        price = 350;
        break;
    case 8:
        break; // Exit the medicine section
    default:
        cout << "Invalid choice!" << endl;
        return;
    }


    cout << "\t\t------------------------------------\n";
    cout << "\t\t|| You need\t[ " << medicine << " ]\n" << "\t\t|| Price: \t Rs." << price << "\t\t" << endl;
    cout << "\t\t------------------------------------\n";
    totalAmount = totalAmount + price;
}
// Function to search for medicine based on keyword
void SearchMedicine(const string& keyword) {
    cout << "\t\t------------------------------------\n";
    cout << "\t\t|| Searching for: " << keyword << " ||\n";

    // Iterate through the medicine array and check for the keyword match
    for (const string& med : BasicMedsPrescription) {
        // Case-insensitive search
        if (med.find(keyword) != string::npos) {
            cout << "\t\t|| Found: " << med << " ||\n";
            // Optionally display the price or other details
        }
    }

    cout << "\t\t------------------------------------\n";
}
void Skin(int skinType, double& totalAmount) {
    string skincare;
    switch (skinType) {
    case 1:
        skincare = SkinCarePrescription[0];
        price = 1400;
        break;
    case 2:
        skincare = SkinCarePrescription[1];
        price = 5000;
        break;
    case 3:
        skincare = SkinCarePrescription[2];
        price = 3000;
        break;
    case 4:
        skincare = SkinCarePrescription[3];
        price = 6000;
        break;
    case 5:
        skincare = SkinCarePrescription[4];
        price = 2800;
        break;
    case 6:
        skincare = SkinCarePrescription[5];
        price = 4500;
        break;
    case 7:
        skincare = SkinCarePrescription[6];
        price = 2400;
        break;
    case 8:
        break; // Exit the skincare section
    default:
        cout << "Invalid choice!" << endl;
        return;
    }

    cout << "\t\t------------------------------------\n";
    cout << "\t\t|| You need\t[ " << skincare << " ]\n" << "\t\t|| Price: \t Rs." << price << "\t\t" << endl;
    cout << "\t\t------------------------------------\n";
}

void Make_up(int mkup, double& totalAmount) {                                                                                             //function for makeup products
    string makeupoptions;
    switch (mkup) {
    case 1:
        makeupoptions = MakeUpProducts[0];
        price = 5000;
        break;
    case 2:
        makeupoptions = MakeUpProducts[1];
        price = 1500;
        break;
    case 3:
        makeupoptions = MakeUpProducts[2];
        price = 4000;
        break;
    case 4:
        break;
    default:
        cout << "Invalid choice!" << endl;

    }
    cout << "\t\t------------------------------------\n";
    cout << "\t\t|| You need\t[ " << makeupoptions << " ]\n" << "\t\t|| Price: \t Rs." << price << "\t\t" << endl;
    cout << "\t\t------------------------------------\n";
    totalAmount += price;
}

void Suppls(int supplementType, double& totalAmount) {                                                                                   //function for supplements
    string supplement;

    switch (supplementType) {
    case 1:
        supplement = SupplementPrescription[0];
        price = 294;
        break;
    case 2:
        supplement = SupplementPrescription[1];
        price = 234;
        break;
    case 3:
        supplement = SupplementPrescription[2];
        price = 2590;
        break;
    case 4:
        supplement = SupplementPrescription[3];
        price = 4550;
        break;
    case 5:
        supplement = SupplementPrescription[4];
        price = 9500;
        break;
    case 6:
        supplement = SupplementPrescription[5];
        price = 340;
        break;
    case 7:
        break; // Exit the supplements section
    default:
        cout << "Invalid choice!" << endl;

    }

    cout << "\t\t------------------------------------\n";
    cout << "\t\t|| You need\t[ " << supplement << " ]\n" << "\t\t|| Price: \t Rs." << price << "\t\t" << endl;
    cout << "\t\t------------------------------------\n";
    totalAmount += price;
}

void MedEquip(int equipmentType, double& totalAmount) {                                                                                   //function for medical equipment
    string equipment;

    switch (equipmentType) {
    case 1:
        equipment = MedicalEquipentType[0];
        price = 550;
        break;
    case 2:
        equipment = MedicalEquipentType[1];
        price = 1999.99;
        break;
    case 3:
        equipment = MedicalEquipentType[2];
        price = 600;
        break;
    case 4:
        equipment = MedicalEquipentType[3];
        price = 2370;
        break;
    case 5:
        equipment = MedicalEquipentType[4];
        price = 20;
        break;
    case 6:
        equipment = MedicalEquipentType[5];
        price = 7000;
        break;
    case 7:
        equipment = MedicalEquipentType[6];
        price = 570;
        break;
    case 8:
        equipment = MedicalEquipentType[7];
        price = 3200;
        break;
    case 9:
        equipment = MedicalEquipentType[8];
        price = 10000;
        break;
    case 10:
        break; // Exit the medical equipment section
    default:
        cout << "Invalid choice!" << endl;
    }

    cout << "\t\t------------------------------------\n";
    cout << "\t\t|| You need\t[ " << equipment << " ]\n" << "\t\t|| Price: \t Rs." << price << "\t\t" << endl;
    cout << "\t\t------------------------------------\n";
    totalAmount += price;
}

void Snack(int snackType, double& totalAmount) {                                                                                          //function for snacks

    string snacks;
    switch (snackType) {
    case 1:
        snacks = SnackTypes[0];
        price = 50;
        break;
    case 2:
        snacks = SnackTypes[1];
        price = 30;
        break;
    case 3:
        snacks = SnackTypes[2];
        price = 30;
        break;
    case 4:
        snacks = SnackTypes[3];
        price = 100;
        break;
    case 5:
        snacks = SnackTypes[4];
        price = 100;
        break;
    case 6:
        snacks = SnackTypes[5];
        price = 40;
        break;
    case 7:
        snacks = SnackTypes[6];
        price = 50;
        break;
    case 8:
        snacks = SnackTypes[7];
        price = 60;
        break;
    case 9:
        snacks = SnackTypes[8];
        price = 5;
        break;
    case 10:
        snacks = SnackTypes[9];
        price = 50;
        break;
    case 11:
        snacks = SnackTypes[9];
        price = 40;

    case 12:
        break; // Exit the snacks list 
    default:
        cout << "Invalid choice!" << endl;
    }

    cout << "\t\t------------------------------------\n";
    cout << "\t\t|| You need\t[ " << snacks << " ]\n" << "\t\t|| Price: \t Rs." << price << "\t\t" << endl;
    cout << "\t\t------------------------------------\n";
    totalAmount += price;
}

void Babies(int babyCare, double& totalAmount) {                                                                                          //function for baby items

    string babyStuff;

    switch (babyCare) {
    case 1:
        babyStuff = BabyCareProducts[0];
        price = 2600;
        break;
    case 2:
        babyStuff = BabyCareProducts[1];
        price = 250;
        break;
    case 3:
        babyStuff = BabyCareProducts[2];
        price = 1800;
        break;
    case 4:
        babyStuff = BabyCareProducts[3];
        price = 300;
        break;
    case 5:
        babyStuff = BabyCareProducts[4];
        price = 270;
        break;
    case 6:
        babyStuff = BabyCareProducts[5];
        price = 700;
        break;
    case 7:
        babyStuff = BabyCareProducts[6];
        price = 1000;
        break;
    case 8:
        babyStuff = BabyCareProducts[7];
        price = 950;
        break;
    case 9:
        babyStuff = BabyCareProducts[8];
        price = 1200;
        break;
    case 10:
        babyStuff = BabyCareProducts[9];
        price = 800;
        break;
    case 11:
        babyStuff = BabyCareProducts[10];
        price = 550;
        break;
    case 12:
        break; // Exit the supplements section
    default:
        cout << "Invalid choice!" << endl;
    }

    cout << "\t\t------------------------------------\n";
    cout << "\t\t|| You need\t[ " << babyStuff << " ]\n" << "\t\t|| Price: \t Rs." << price << "\t\t" << endl;
    cout << "\t\t------------------------------------\n";
    totalAmount += price;
}
*/
void DeliveryDetails() {
    string email, contactNumber, address;
    cout << "  Please provide your delivery details:" << endl;
    cout << "  Email address: ";
    cin >> email;
    cout << "  Contact number: ";
    cin >> contactNumber;
    cout << "  House address: ";
    cin.ignore(); // Ignore the newline character in the input buffer
    getline(cin, address);

    // Calculate total amount including delivery charges
    double totalAmountWithDelivery = totalAmount + 150.0;

    cout << "\n\t\t----------------------------------------------\n";
    cout << "\t\t|| Total Amount (including delivery): Rs. " << totalAmountWithDelivery << "\t\t" << endl;
    cout << "\t\t------------------------------------------------\n";
    cout << "\n  Thank you for your order! It will be delivered to:\n";
    cout << "  Email: " << email << endl;
    cout << "  Contact Number: " << contactNumber << endl;
    cout << "  Address: " << address << endl;
    cout << "  Estimated delivery time: 2-3 business HOURS.\n";
    srand(static_cast<long int>(time(NULL)));
    cout << "  Your tracking number is: "<<rand() << "\n\n ";
}

void Pickup() {
    cout << "\n\t\t----------------------------------------------\n";
    cout << "\t\t|| Total Amount: Rs. " << totalAmount << "\t\t" << endl;
    cout << "\t\t------------------------------------------------\n";
    cout << "\n  Thank you for your order! Please pick it up at our store.\n";
}
void ProcessOrder(double& totalAmount) {
    char deliveryChoice, paymentOption;
    string cardHolderName, cardNumber, CCV;
    if (totalAmount > 0) {
        cout << "  Would you like pickup (P) or delivery (D)? ";
        cin >> deliveryChoice;
        cout << endl;
        while (deliveryChoice != 'D' && deliveryChoice != 'd' && deliveryChoice != 'P' && deliveryChoice != 'p') {
            cout << "  Invalid choice! Please enter 'P' for pickup or 'D' for delivery: ";
            cin >> deliveryChoice;
        }

        if (deliveryChoice == 'D' || deliveryChoice == 'd') {
            cout << "  Payment options:" << endl;
            cout << "  Online (O)" << endl;
            cout << "  Cash on delivery (C)" << endl;
            cin >> paymentOption;
            if (paymentOption == 'o' || paymentOption == 'O') {
                cout << endl;
                cout << "  Card holder name: ";
                cin >> cardHolderName;
                cout << "  Card number: ";
                cin >> cardNumber;
                cout << "  CCV: ";
                cin >> CCV;
                DeliveryDetails();
            }
            else if (paymentOption == 'C' || paymentOption == 'c') {
                DeliveryDetails();
            }
            
        }
        else if (deliveryChoice == 'P' || deliveryChoice == 'p') {
            Pickup();
        }
    }
    else {
        cout << endl;
        cout << endl;
        cout << endl;
        cout <<"  Your cart is empty, thank you for visiting." << endl;
        cout << endl;
        cout << endl;
    }
}




void DisplayCategories() {
    // Display categories dynamically from the array
    cout << "\n\n\t\t\t  Pharmacy Management System \n";
    cout << "\t\t============================================\n\n";
    cout << "\t\t--------------------------------------------\n";
    cout << "\t\t||\tWelcome to the Pharmacy!\t  \n";
    cout << "\t\t||\tWhat are you looking for?\t  \n";

    for (int i = 0; i < 8; ++i) {
        cout << "\t\t||\t" << i + 1 << ". " << categories[i] << "\t\t\t  \n";
    }

    cout << "\t\t--------------------------------------------\n";
    cout << "\t\t--------------------------------------------\n";
    cout << "  Enter your choice (1-8): ";
}

void DisplayItems(int choice, bool& exitRequested, double& totalAmount) {
    while (!exitRequested) {
        cout << "\t\t--------------------------------------------\n";
        cout << "\t\t--------------------------------------------\n";
        cout << "\t\t||\tAvailable " << categories[choice - 1] << ":\t\t  " << endl;

        for (int i = 0; i < 12; ++i) {
            if (itemTypes[choice - 1][i] != "") {
                cout << "\t\t||\t" << i + 1 << ". " << itemTypes[choice - 1][i] << "\t\t\t\t" << itemPrices[choice-1][i] << endl;

            }
        }

        cout << "\t\t||\t" << 0 << ". Back to categories\t  " << endl;
        cout << "\t\t--------------------------------------------\n";
        cout << "\t\t--------------------------------------------\n";
        cout << "  Enter your choice: ";

        int subChoice;
        cin >> subChoice;

        if (subChoice == 0) {
            exitRequested = true;
        }
        else if (subChoice < 1 || subChoice > 12) {
            cout << "Invalid choice!" << endl;
        }
        else {
            // Handle the selected subcategory or item (you can use switch cases or function calls here)
            if (subChoice != 12) {
                cout << "You selected: " << itemTypes[choice - 1][subChoice - 1] << endl;
                totalAmount += itemPrices[choice - 1][subChoice - 1];
                // Add logic to process the selection here
            }
        }
    }
}

bool WelcomeScreen(double& totalAmount) {
    int choice;
    bool exitRequested = false;
    DisplayCategories();
    cin >> choice;

    if (choice < 1 || choice > 8) {
        cout << "Invalid choice!" << endl;
        return WelcomeScreen(totalAmount); // Recursively call itself to prompt for a valid choice
    }

    if (choice != 8) {
        DisplayItems(choice, exitRequested, totalAmount);
    }

    return choice != 8; // Return false only if the user selects the Exit option
}


int main() {

    while (WelcomeScreen(totalAmount)) {}

    ProcessOrder(totalAmount);

    return 0;
}
