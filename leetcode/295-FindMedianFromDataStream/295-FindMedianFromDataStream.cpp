// Last updated: 4/13/2026, 3:37:28 PM
class MedianFinder {
public:
    priority_queue<double, vector<double>, greater<double>>* next; 
    priority_queue<double>* prev; 
    int pre,nex;
    MedianFinder() {
       prev=new  priority_queue<double>;
       next=new  priority_queue<double, vector<double>, greater<double>>;
       pre=0;
       nex=0;
    }
    
    void addNum(int num) {
        if(prev->empty()){
            prev->push(num);
            pre++;
            return;
        }
        if(num<=prev->top()){
            prev->push(num);
            pre++;
        }
        else{
            next->push(num);
            nex++;
        }
        if(abs(pre-nex)>1){
            if(pre>nex){
                while((pre-nex)>1){
                    next->push(prev->top());
                    pre--;
                    nex++;
                    prev->pop();
                }
            }
            else{
                while((nex-pre)>1){
                    prev->push(next->top());
                    pre++;
                    nex--;
                    next->pop();
                }
            }
        }
    }
    
    double findMedian() {
        if(pre==nex&&pre!=0){
            return (prev->top()+next->top())/2;
        }
        else if(pre>nex){
            return prev->top();
        }
        else return next->top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */