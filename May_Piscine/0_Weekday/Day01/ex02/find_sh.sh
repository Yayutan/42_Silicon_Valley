#!/bin/sh
find . -name "*.sh" | rev | cut -d. -f2- | rev | cut -d/ -f2-
