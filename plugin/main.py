#!/usr/bin/env python3

import argparse
import importlib
import json

def run_plugins(config):
  for plugin in config['plugins']:
    plugin['implementation'].run()

def load_plugins(config):
  for plugin in config['plugins']:
    plugin['implementation'] = importlib.import_module(
      'plugins.{0}.main'.format(plugin['name'])
    )

def get_arguments():
  parser = argparse.ArgumentParser(
    description='Run plugins that don\'t do anything.'
  )

  parser.add_argument(
    '-c',
    '--config',
    type=argparse.FileType('r'),
    default='config.json',
    dest='config_file',
    help='Path to the configuration file.'
  )

  return parser.parse_args()

def get_config(config_file):
  return json.load(config_file)

def main():
  args = get_arguments()
  config = get_config(args.config_file)
  load_plugins(config)
  run_plugins(config)

if __name__ == '__main__':
  main()
