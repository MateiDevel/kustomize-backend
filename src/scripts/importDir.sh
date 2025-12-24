#!/bin/bash
set -e

USER=$(whoami) 

SRC="/home/$USER/.config"
DST="/home/$USER/Documents/kustomize"

rsync -a "$SRC/" "$DST/