1. Container With Most Water

  concept : two pointer.
    
    
    class Solution {
        public:
         int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxi = 0;
        while(left < right){
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = h * w;
            maxi = max(maxi, area);
            if(height[left] < height[right]) left++;
            else if(height[left] > height[right]) right--;
            else {
                left++;
                right--;
            }
        }
        return maxi;
    }
};
2. Balanced Parentheses
class Solution {
public:
    bool isValid(string expr) {
        stack<char> temp;

	for (int i = 0; i < expr.length(); i++) {
		if (temp.empty()) {

			temp.push(expr[i]);
		}
		else if ((temp.top() == '(' && expr[i] == ')')|| (temp.top() == '{' && expr[i] == '}')|| (temp.top() == '[' && expr[i] == ']'))
                            {
			temp.pop();
		}
		else {
			temp.push(expr[i]);
		}
	}
	if (temp.empty()) {	
		return true;
	}
	return false ;
    }
};
