// 4. Create a StringBuffer object and perform:
// append()
// insert()
// delete()
// deleteCharAt()
// setCharAt()
// substring()
// capacity()
// ensureCapacity()
// length()
// toString()
public class StringBufferDemo {
    public static void main(String[] args) {

        // Create StringBuffer object
        StringBuffer sb = new StringBuffer("Hello");

        // append()
        sb.append(" Java");
        System.out.println("After append(): " + sb);

        // insert()
        sb.insert(5, " Programming");
        System.out.println("After insert(): " + sb);

        // delete()
        sb.delete(5, 17);
        System.out.println("After delete(): " + sb);

        // deleteCharAt()
        sb.deleteCharAt(5);
        System.out.println("After deleteCharAt(): " + sb);

        // setCharAt()
        sb.setCharAt(0, 'h');
        System.out.println("After setCharAt(): " + sb);

        // substring()
        String sub = sb.substring(0, 5);
        System.out.println("Substring (0,5): " + sub);

        // length()
        System.out.println("Length: " + sb.length());

        // capacity()
        System.out.println("Capacity: " + sb.capacity());

        // ensureCapacity()
        sb.ensureCapacity(50);
        System.out.println("Capacity after ensureCapacity(50): "
                           + sb.capacity());

        // toString()
        String str = sb.toString();
        System.out.println("String using toString(): " + str);
    }
}