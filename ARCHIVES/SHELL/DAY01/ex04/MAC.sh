#!/bin/sh
ifconfig | grep ether | tr -d ' ' | rev | cut -c -17 | rev
