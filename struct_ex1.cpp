#include <bits/stdc++.h>
using namespace std;
struct Student {
    string name;
    int s1, s2, s3;
    int total;
    double avg;
    char grade;
};Student classroom[105];
int main(){
    cout << fixed << setprecision(2);
    int n;
    cin >> n;
    int max = 0;
    string top_student = "";
    int max_total = 0;
    for(int i=0; i<n; i++){
        cin >> classroom[i].name >> classroom[i].s1 >> classroom[i].s2 >> classroom[i].s3;

        classroom[i].total = classroom[i].s1 + classroom[i].s2 + classroom[i].s3;
        classroom[i].avg = classroom[i].total / 3.0;
        if (classroom[i].avg >= 80) classroom[i].grade = 'A';
        else if (classroom[i].avg >= 70) classroom[i].grade = 'B';
        else if (classroom[i].avg >= 60) classroom[i].grade = 'C';
        else if (classroom[i].avg >= 50) classroom[i].grade = 'D';
        else classroom[i].grade = 'F';
        if (classroom[i].total > max_total) {
            max_total = classroom[i].total;
            top_student = classroom[i].name;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << classroom[i].name << " "
             << classroom[i].total << " " 
             << classroom[i].avg << " " 
             << classroom[i].grade << "\n";
    }
    cout << "TOP " << top_student << "\n";
}
