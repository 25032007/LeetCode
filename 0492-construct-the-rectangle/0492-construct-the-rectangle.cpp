class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = 1;

        for(int i=1; i<=sqrt(area); i++){
            if(area % i == 0){
                w = i;
            }
        }

        int l = area / w;
        
        return {l, w};
    }
};