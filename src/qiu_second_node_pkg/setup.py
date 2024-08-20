from setuptools import setup

package_name = 'qiu_second_node_pkg'

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
    maintainer='qiu',
    maintainer_email='qiulei.zhong@breton.top',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': ['qiu_seconde_pkg_node=qiu_second_node_pkg.node:main',
                            'person_node=qiu_second_node_pkg.person:main',
                            'writer_node=qiu_second_node_pkg.writer:main'
        ],
    },
)
