public class StringOperations {
    public static void main(String[] args) {
        String str1 = "Hello";
        String str2 = "World";

        String concatenatedStr = str1 + " " + str2;
        System.out.println("Concatenated string: " + concatenatedStr);

        int length = str1.length();
        System.out.println("Length of string '" + str1 + "': " + length);

        String substring = str1.substring(2, 4);
        System.out.println("Substring of '" + str1 + "': " + substring);


        String uppercaseStr = str1.toUpperCase();
        System.out.println("Uppercase string: " + uppercaseStr);

        String lowercaseStr = str1.toLowerCase();
        System.out.println("Lowercase string: " + lowercaseStr);


        boolean isEqual = str1.equals(str2);
        System.out.println("Are '" + str1 + "' and '" + str2 + "' equal? " + isEqual);

        int comparison = str1.compareTo(str2);
        System.out.println("Comparison result: " + comparison);
    }
}
