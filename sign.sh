#!/bin/bash
codesign -f -s "iPhone Developer" --entitlements Clutch.entitlements $1
