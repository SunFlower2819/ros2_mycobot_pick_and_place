from setuptools import find_packages
from setuptools import setup

setup(
    name='robocallee_fms',
    version='0.0.0',
    packages=find_packages(
        include=('robocallee_fms', 'robocallee_fms.*')),
)
