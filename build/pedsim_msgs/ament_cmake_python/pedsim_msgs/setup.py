from setuptools import find_packages
from setuptools import setup

setup(
    name='pedsim_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('pedsim_msgs', 'pedsim_msgs.*')),
)
