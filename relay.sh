#!/bin/bash

url="http://api.justyo.co/yoall/"

while read -r line < /dev/cu.usbmodemfd131; do
  # $line is the line read, do something with it
  lineclean=$(echo -n $line | tr -d '\r' | tr -d '\n')
  curl --data "api_token=$lineclean" http://api.justyo.co/yoall/ -v
done
