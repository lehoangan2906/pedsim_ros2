from setuptools import find_packages
from setuptools import setup

setup(
    name='pedsim_srvs',
    version='0.0.1',
    packages=find_packages(
        include=('pedsim_srvs', 'pedsim_srvs.*')),
)
