class Solution {
public:
    int vert(pair<int,int>a ,pair<int,int>b,int p,int q,int &v,int &h){
        if(b.first==0){
            if(b.second==0)
                return 2;
            return 1;
        }
        if(b.first==p && b.second==p)
            return 0;
        if((v==1&&a.first-2*q>=0)||(v==0&&a.first+2*q>=0)){
            pair <int,int >c;
            c=a;
            a=b;
            if(v==1)
                b.first=c.first-2*(q);
            else
                b.first=c.first+2*(q);
            b.second=c.second;
            return vert(a,b,p,q,v,h);
        }else{
            
            //a=make_pair()
            //hori<
            
        }
          return 666;  
    }
    int hori(pair<int,int>a ,pair<int,int>b,int p,int &h){
        if(b.second==0){
            if(b.first==0)
                return 2;
            return 1;
        }
        if(b.first==p && b.second==p)
            return 0;
        if(a.first-a.second>=0){
            
        }else{
            
        }
        return 666;  
    }
    int mirrorReflection(int p, int q) {
        return q == 0 ? 0 : ((p & -p) > (q & -q) ? 2 : (p & -p) < (q & -q) ? 0 : 1);

    }
};