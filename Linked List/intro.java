public class intro {

    class Node {
        int data;
        Node next;

        // Constructor with both data and next node
        Node(int data1, Node next1) {
            this.data = data1;
            this.next = next1;
        }

        // Constructor with only data, sets next to null
        Node(int data1) {
            this.data = data1;
            this.next = null;
        }
    }

    public static void main(String[] args) {
        intro Intro = new intro(); // Create an instance of Intro to access the inner class Node
        int[] arr = {2, 3, 4, 5};
        Node y = Intro.new Node(arr[0]); // Instantiate Node with a value
        System.out.println("Node data: " + y.data);
    }
}
