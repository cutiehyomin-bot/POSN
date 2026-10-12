#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
string password(string p) {
    int cap=0;
    int small=0;
    int num=0;
    for(int i=0; i<p.length(); i++){
        if(p[i] <= char(90) && p[i] >= char(65)) cap++;
        if(p[i] <= char(122) && p[i] >= char(97)) small++;
        if(p[i] <= char(57) && p[i] >= char(48)) num++;
    }
    if(p.length()<8) return "No";
    else if(cap<1) return "No";
    else if(small<1) return "No";
    else if(num<1) return "No";
    else return "Yes";
}