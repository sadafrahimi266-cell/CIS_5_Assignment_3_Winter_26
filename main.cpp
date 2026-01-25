#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int scores [30] = {78, 92, 65, 88, 45, 100, 72, 81, 59, 96,
                      84, 67, 91, 53, 77, 89, 62, 98, 74, 85,
                        48, 93, 70, 82, 66, 95, 55, 87, 79, 64};
int sum = 0;
int passCout = 0;
int aCount = 0;
int lowest = scores[0];
int heighest = scores[0];
for (int i = 0; i < 30; i++) {
sum += scores[i];

if (score[i] >=60) {
passCount++;
}
if (score[i] >=90) {
aCount++;
}
if (score[i] < lowest) {
lowest = scores[i];
}
if (score[i] < highest) {
highest = scores[i];
{
double average = sum / 30.0;

cout << fixed << setprecision(2);
cout << "Number of students: 30" << endl;
    cout << "Average score:      " << average << endl;
    cout << "Highest score:      " << highest << endl;
    cout << "Lowest score:       " << lowest << endl;
    cout << "Students passed:    " << passCount << "  (>= 60)" << endl;
    cout << "Students with A:    " << aCount << "  (>= 90)" << endl;

cout << "Scores in original order:" << endl;
    for (int s : scores) {
        cout << s << " ";
    }
    cout << endl;
cout << "Scores in reverse order:" << endl;
    for (int i = 29; i >= 0; i--) {
        cout << scores[i] << " ";
    }
    cout << endl;

    return 0;
}
