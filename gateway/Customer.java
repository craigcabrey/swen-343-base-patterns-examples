public class Customer {
	private String name;
	private int id;

	Customer(String name, int id) {
		this.name = name;
		this.id = id;
	}

	public String toString() {
		return this.name;
	}
}