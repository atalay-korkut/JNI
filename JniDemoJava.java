
package jnidemojava;


public class JniDemoJava {

    public native void hello();
            
    public static void main(String[] args) {
        
       System.loadLibrary("JniDemoJava");
        
       JniDemoJava obj = new JniDemoJava();
       obj.hello();
       // System.out.println(System.getProperty("java.library.path"));
       
    }
    
}
