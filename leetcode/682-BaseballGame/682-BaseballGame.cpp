// Last updated: 4/13/2026, 3:36:02 PM
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> record;
        int op1,op2;
        for(int i=0;i<operations.size();i++){
            if(operations[i][0]=='C') {record.pop();}
            else if(operations[i][0]=='D') {
                op1=record.top();
                record.push(2*op1);
            }
            else if(operations[i][0]=='+'){
                op1=record.top();
                record.pop();
                op2=record.top();
                op2+=op1;
                record.push(op1);
                record.push(op2);
            }
            else{
                record.push(stoi(operations[i]));
            }
        }
        op1=0;
        while(record.empty()!=1){
            op1+=record.top();
            record.pop();
        }
        return op1;
    }
};