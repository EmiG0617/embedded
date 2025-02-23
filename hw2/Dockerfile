# This is the base image to use
    # alternatively you could use ubuntu and apt update/install python3
    FROM ubuntu:22.04

    # These python images by default are debian based so you can apt install things
    # By default, the apt cache is removed so you have to run an update
    # first. If you uncomment the lines below, this is a simple apt-get
    # update and apt-get install for some packages that your container might need.
     RUN apt-get update && \
         apt-get install -y pkg-config build-essential cmake wget git && \  
         rm -rf /var/lib/apt/lists/*
    # you can use alpine linux (even smaller base) by using one of the official tags
    # FROM python:3.8-alpine3.18, however the apt install commands will be different
    # as alpine uses a different package manager

    # This copies all the files in the current directory
    # to a folder, /app in this case
    # Alternatively you can just copy your python file
    # ex: COPY my_script.py /app/ vs using '.' which copies
    # all files
    WORKDIR /app
    
    COPY . /app

    RUN make all
    ENV LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH 
    
    # This is the default work directory
    # when you shell into the container
    # This is the default location

    # This cmd is run when you launch the container
    # RUN export to assure libraries are accessible by programs
    CMD ["./example"]