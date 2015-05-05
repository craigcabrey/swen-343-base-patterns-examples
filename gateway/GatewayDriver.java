public class GatewayDriver {
  public static void main(String[] args) {
    System.out.println("Starting Gateway example.");
    AirlineCustomer airlineCustomer = new AirlineCustomer("Fred", 1, "SFO", "ROC");
    HomeCustomer homeCustomer = new HomeCustomer("Javier", 2, "Redmond");
    OilCustomer oilCustomer = new OilCustomer("Guadalupe", 3, "Rancho Bernardo");
    System.out.println(airlineCustomer.getAirlinePrice());
    System.out.println(homeCustomer.getHomePrice());
    System.out.println(oilCustomer.getOilPrice());
  }
}
