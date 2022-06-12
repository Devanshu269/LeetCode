class Solution {
    public int romanToInt(String s) {
         HashMap<Character , Integer> map = new HashMap<>();
        map.put('I' , 1);
        map.put('V' , 5);
        map.put('X' , 10);
        map.put('L' , 50);
        map.put('C' , 100);
        map.put('D' , 500);
        map.put('M' , 1000);
        
        int sum = 0 ;
        
        int index = 0;
        while ( index < s.length())
        {
            int cur = map.get(s.charAt(index));
            index++;
            if (index  < s.length())
            {
                int cur2 = map.get(s.charAt(index));
                if (cur2 > cur){
                    sum+=(cur2 - cur);
                    index++;
                    }
                else
                    sum+=cur;
            }else
                sum+=cur;
            
                
        }
        return sum;
    }
}