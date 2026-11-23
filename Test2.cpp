// Project: Weekly Electricity Bill Tracker
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // variable for store 
    const int Days = 7;
    double dailyUsage, totalUsage;
    double highestUsage = 0.00 , lowestUsage = 0.00;
    int highestDay = 1, lowestDay = 1;


    cout << "===== Weekly Electricity Bill Tracker =====\n";
    // 1.ប្រើ for loop ដើម្បីទទួលទិន្នន័យរយៈពេល 7 ថ្ងៃ។
    for (int i = 1 ; i <= Days ; i++) {
        cout << "Day " << i << " usage: "; cin >> dailyUsage;

        // 2.គណនាការប្រើប្រាស់អគ្គិសនីសរុប (totalUsage)។
        totalUsage += dailyUsage;

        // 6.រកថ្ងៃដែលប្រើអគ្គិសនីច្រើនជាងគេ (Highest Usage)។
        //   រកថ្ងៃដែលប្រើអគ្គិសនីតិចជាងគេ (Lowest Usage)។
        if (i == 1) {
            // ប្រើសម្រាប់ផ្ទុកតម្លៃ ដំបូងនៃថ្ងៃដំបូង
            highestUsage = dailyUsage; // Ex = 4
            lowestUsage = dailyUsage;  // Ex = 4
            highestDay = 1;
            lowestDay = 1;
        } else {
            if (dailyUsage > highestUsage) { 
                highestUsage = dailyUsage;
                highestDay = i;
            }
            if (dailyUsage < lowestUsage) {
                lowestUsage = dailyUsage;
                lowestDay = i;
            }
        }
    }
    cout << "===========================================\n\n";
    // 3.គណនាការប្រើប្រាស់ជាមធ្យម (averageUsage)។
    double averageUsage = totalUsage / Days;

    // 4.គណនាតម្លៃត្រូវបង់ ដោយកំណត់តម្លៃ 1 kWh = $0.20។
    const double pricePer1Kwh = 0.2;

    // 5.បង្ហាញរបាយការណ៍ចុងក្រោយ។
    cout << "\n========= WEEKLY REPORT ==========\n";
    cout << "Total Usage: " << totalUsage << " kWh\n";
    cout << "Average Usage: " << averageUsage << " kWh\n\n";
    cout << "Electricity Rate: $" << pricePer1Kwh << "\n";
    cout << "Total Bill: $" << totalUsage * pricePer1Kwh << "\n";
    cout << "Day " << highestDay << " Highest Usage: " << highestUsage << " kWh\n";
    cout << "Day " << lowestDay << " Lowest Usage: " << lowestUsage << " kWh\n";
    // 7.ប្រសិនបើការប្រើប្រាស់ជាមធ្យមលើសពី 6 kWh បង្ហាញ High Electricity Usage។
    //   ប្រសិនបើមិនលើសពី 6 kWh បង្ហាញ Normal Electricity Usage។
    if (averageUsage >= 6.0) {
        cout << "Status: " << averageUsage << " kWh High Electricity Usage\n";
    } else {
        cout << "Status: " << averageUsage << " kWh Normal Electricity Usage\n";
    }
    cout << "===================================\n";

    return 0;
}