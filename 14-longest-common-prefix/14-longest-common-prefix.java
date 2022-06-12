class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);//do check this on java visualizer
        String start=strs[0];
        String end=strs[strs.length-1];
        int i=0;
        while(i<start.length())//note that length of start is considered and not end
        {
            if(start.charAt(i)==end.charAt(i)) 
                i++;
            else 
                break;
        }
        if(i==0){
            return "";
        }else{
            return start.substring(0,i);
        }  
    }
}