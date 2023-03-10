from setuptools import setup

package_name = 'dofsensor'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dvuon',
    maintainer_email='dcvuong@mit.edu',
    description='dof sensor client, server, and publisher',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'service = dofsensor.server:main',
            'client = dofsensor.client:main',
            'talker = dofsensor.publisher:main'
        ],
    },
)
