class Kiduser implements Libraryuser {
    int age;
    String booktype;
    public void registeraccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kid Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }
    public void requestbook() {
        if (booktype.equals("Kids")) {
            System.out.println("Book issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}
