class Solution {
    public String decodeString(String s) {
        return func(s,0,s.length()-1);
    }
    String func(String s ,int a , int b){
        String answer="";
        int i = a;
        int x ;
        int j;
        while(i<=b){
            if(s.charAt(i)>='0' &&s.charAt(i)<='9'){
                
                x = s.charAt(i)-'0';
                i++;
                while(s.charAt(i)!='['){
                    x=x*10+(s.charAt(i)-'0');
                    i++;
                }
                j = i+2;
                int m = 0 ;
                while(true){
                    if(s.charAt(j)==']' && m ==0){
                        break;
                    }else if (s.charAt(j)=='['){
                        m++;
                    }else if(s.charAt(j)==']'){
                        m--;
                    }
                    j++;
                }
                String f = func(s,i+1,j-1);
                for(int k = 0 ; k < x ;k++){
                    answer += f;
                    
                    
                }
                
                i=j+1;
            }else{
                answer+=s.charAt(i);

                // System.out.println("##"+answer);
                i++;
                // return answer;
            }
        }
        return answer;
    }
    
}