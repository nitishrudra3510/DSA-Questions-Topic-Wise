public class Traversal
 {
    
    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public Node convertArr2LL(int[] arr) {
        if (arr.length == 0) return null;

        Node head = new Node(arr[0]);
        Node mover = head;

        for (int i = 1; i < arr.length; i++) {
            Node temp = new Node(arr[i]);
            mover.next = temp;
            mover = temp;
        }

        return head;
    }

    public void printLinkedList(Node head) {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        Traversal listConverter = new Traversal();

        int[] arr = {12, 5, 6, 8};

        Node head = listConverter.convertArr2LL(arr);

        listConverter.printLinkedList(head);
    }
}







// comment all lines here only to understand the code.
// public class Array2LinkedList {
    
//     // Node class definition
//     class Node {
//         int data;
//         Node next;

//         // Constructor to initialize node
//         Node(int data) {
//             this.data = data;
//             this.next = null; // Initialize next as null
//         }
//     }

//     // Method to convert array to linked list
//     public Node convertArr2LL(int[] arr) {
//         if (arr.length == 0) return null; // Handle empty array case

//         // Initialize head with the first element of the array
//         Node head = new Node(arr[0]);
//         Node mover = head;

//         // Loop through the rest of the array and create nodes
//         for (int i = 1; i < arr.length; i++) {
//             Node temp = new Node(arr[i]); // Create a new node
//             mover.next = temp; // Link the current node to the new node
//             mover = temp; // Move mover to the new node
//         }

//         return head; // Return the head of the linked list
//     }

//     // Method to print the linked list
//     public void printLinkedList(Node head) {
//         Node current = head;
//         while (current != null) {
//             System.out.print(current.data + " -> ");
//             current = current.next;
//         }
//         System.out.println("null");
//     }

//     // Main function to test the functionality
//     public static void main(String[] args) {
//         Array2LinkedList listConverter = new Array2LinkedList(); // Create an instance of LinkedList

//         // Create an array of integers
//         int[] arr = {12, 5, 6, 8};

//         // Convert array to linked list
//         Node head = listConverter.convertArr2LL(arr);

//         // Print the linked list
//         listConverter.printLinkedList(head);
//     }
// }
