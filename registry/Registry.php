<?php

class Registry {
    private $registry = array();

    public static $instance;

    public function set($key, $value) {
      if (isset($this->registry[$key])) {
         throw new Exception("There is already an entry for key " . $key);
      }

      $this->registry[$key] = $value;
    }

    public function get($key) {
      if (!isset($this->registry[$key])) {
         throw new Exception("There is no entry for key " . $key);
      }

      return $this->registry[$key];
    }

    public static function getInstance() {
     if(self::$instance === null) {
        self::$instance = new Registry();
     }
 
     return self::$instance;
  }
}

class FakePdo{
    private $potato = 'potato';
}

// Make an object
$pdo = new FakePdo();
// Get the registry
$registry = Registry::getInstance();

//set the pdo object
$registry->set('pdo', $pdo);

//retrieve the pdo object
//this would allow you to get this same pdo object from other parts of your code
//without having to reinstantiate it
var_dump($registry->get('pdo'));
