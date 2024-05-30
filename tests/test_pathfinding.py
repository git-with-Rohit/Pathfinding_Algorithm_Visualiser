import unittest
import subprocess
import os

class TestPathfinding(unittest.TestCase):
    def setUp(self):
        # Path to the executable in the build directory
        self.executable_path = os.path.join(os.getcwd(), 'build', 'Pathfinding_Algorithm_Visualiser')

    def test_a_star(self):
        # Run the C++ executable with a test case for the A* algorithm
        result = subprocess.run([self.executable_path, 'a_star', 'test_case_1'], capture_output=True, text=True)
        output = result.stdout
        print("A* Algorithm Output:", output)  # Debug print
        
        # Check if the output contains the expected result
        self.assertIn("Expected Output", output)

    def test_dijkstra(self):
        # Run the C++ executable with a test case for Dijkstra's algorithm
        result = subprocess.run([self.executable_path, 'dijkstra', 'test_case_1'], capture_output=True, text=True)
        output = result.stdout
        print("Dijkstra Algorithm Output:", output)  # Debug print
        
        # Check if the output contains the expected result
        self.assertIn("Expected Output", output)

if __name__ == '__main__':
    unittest.main()
