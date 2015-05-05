class Customer {
  constructor(public name: string) {}
}

class MissingCustomer extends Customer {
  constructor() {
    super('No such customer.');
  }
}

function getCustomerById(id) {
  switch(id) {
    case 1:
      return new Customer('John Doe');
    default:
      return new MissingCustomer();
  }
}

var missingCustomer = getCustomerById(0);
var customer = getCustomerById(1);

console.log(missingCustomer);
console.log(customer);
