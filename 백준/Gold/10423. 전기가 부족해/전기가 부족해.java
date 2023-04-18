import java.lang.reflect.Array;
import java.util.*;
class Edge{
    int from;
    int end;
    int weight;
    Edge(int f,int e,int w){
        this.from=f;
        this.end=e;
        this.weight=w;
    }
}

public class Main {

static int[] parent ;


static ArrayList<Edge> edges=null;
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        int n=s.nextInt(),m=s.nextInt(),k=s.nextInt();
        // 정점 간선 발전소 9 14 3
        parent=new int[n+1];

        for(int i=1;i<=n;i++){
            parent[i]=i; // num1 ~ num n node
        }

        for(int i=0;i<k;i++){
            int plant=s.nextInt();
            parent[plant]=-1; // plant 초기화 1 2 9 / 3개 발전소
        }
        edges=new ArrayList<Edge>();

        for(int i=0;i<m;i++){ // 간선
            int from=s.nextInt(),to=s.nextInt(),weight=s.nextInt();
            // 시잒 간선 끝 간선 가중치
            edges.add(new Edge(from,to,weight));
        }

        Collections.sort(edges, (e1, e2) -> e1.weight - e2.weight);
//        for (int i=0;i< edges.size();i++)
//        System.out.println(edges.get(i).from+" "+edges.get(i).end+" "+edges.get(i).weight);
        int c=0;

        for(int i=0;i< edges.size();i++){
            Edge edge=edges.get(i);
            //

            if(find(edge.from)!=find(edge.end)) {
                c += edge.weight;

                union(edge.from, edge.end);
                if(isAllConnect())
                    break;
            }

        }
        System.out.println(c);
    }
    public static boolean isAllConnect() {
        for (int i = 1; i < parent.length; i++) {
            if (parent[i] != -1) {
                return false;
            }
        }

        return true;
    }
    public static int find(int x){
        if(parent[x]==-1) return -1;
        if(x==parent[x]) return x;
        return parent[x]=find(parent[x]);
    }
    public static void union(int x,int y){
         x=find(x);
         y=find(y);

        if(x!=y){
            if(x==-1)
                parent[y]=x;
            else if(y==-1)
                parent[x]=y;
            else {
                if(x==-1 && y==-1)
                    return;
                else
                    parent[y]=x;
            }
        }
    }
}
