#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/ros_user/Desktop/CW2/src/comp0037/comp0037_explorer"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/ros_user/Desktop/CW2/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/ros_user/Desktop/CW2/install/lib/python2.7/dist-packages:/home/ros_user/Desktop/CW2/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/ros_user/Desktop/CW2/build" \
    "/usr/bin/python" \
    "/home/ros_user/Desktop/CW2/src/comp0037/comp0037_explorer/setup.py" \
    build --build-base "/home/ros_user/Desktop/CW2/build/comp0037/comp0037_explorer" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/ros_user/Desktop/CW2/install" --install-scripts="/home/ros_user/Desktop/CW2/install/bin"
