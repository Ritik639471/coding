// Last updated: 4/13/2026, 3:41:38 PM
class Solution {
public:
    string intToRoman(int num) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        string str;
        if(num>=1000){
            for(int i=0;i<num/1000;i++) str.push_back('M');
            num=num%1000;
            if(num==0) return str;
        }
        if(num>=900){
            str.push_back('C');
            str.push_back('M');
            num=num-900;
            if(num==0) return str;
        }
        if(num>=500){
            str.push_back('D');
            num=num-500;
            if(num==0) return str;
        }
        if(num>=400){
            str.push_back('C');
            str.push_back('D');
            num=num-400;
            if(num==0) return str;
        }
        if(num>=100){
            for(int i=0;i<num/100;i++) str.push_back('C');
            num=num%100;
            if(num==0) return str;
        }
        if(num>=90){
            str.push_back('X');
            str.push_back('C');
            num=num-90;
            if(num==0) return str;
        }
        if(num>=50){
            str.push_back('L');
            num=num-50;
            if(num==0) return str;
        }
        if(num>=40){
            str.push_back('X');
            str.push_back('L');
            num=num-40;
            if(num==0) return str;
        }
        if(num>=10){
            for(int i=0;i<num/10;i++) str.push_back('X');
            num=num%10;
            if(num==0) return str;
        }
        if(num>=9){
            str.push_back('I');
            str.push_back('X');
            num=num-9;
            if(num==0) return str;
        }
        if(num>=5){
            str.push_back('V');
            num=num-5;
            if(num==0) return str;
        }
        if(num>=4){
            str.push_back('I');
            str.push_back('V');
            num=num-4;
            if(num==0) return str;
        }
        if(num>0){
            for(int i=0;i<num;i++) str.push_back('I');
        }
        return str;
    }
};