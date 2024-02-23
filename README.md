# AdoptionShelter
 # Dog Adoption Management System - Qt GUI Edition

This project introduces a comprehensive Dog Adoption Management System with a user-friendly graphical interface developed using the Qt framework. The system aims to streamline the process of managing and exploring dog adoption records. It features multiple dialogs catering to both administrators and general users, offering a seamless experience for interacting with the adoption data.

## Key Features:

1. **Main GUI (`qtui2.h` and `qtui2.cpp`):**
   - The main graphical user interface (GUI) window serves as the central hub for the entire application.
   - It includes buttons to launch two key dialogs: the Admin Dialog and the User Dialog.

2. **Admin Dialog (`seconddialog.h` and `seconddialog.cpp`):**
   - Administrators can perform various actions, including adding, updating, and deleting dog entries.
   - The dialog displays a list view for easy navigation through the existing records.
   - Error handling mechanisms provide informative messages for user input errors and exceptional scenarios.

3. **User Dialog (`thirddialog.h` and `thirddialog.cpp`):**
   - Designed for general users, this dialog provides a view-only experience.
   - Users can explore the list of adopted dogs without the ability to modify the records.
   - Users now have the ability to add dogs to an adoption list, enhancing user engagement.

4. **Repository (`repo.h` and `repo.cpp`):**
   - The repository class manages the storage and retrieval of dog data, supporting the core functionalities of the system.
   - It includes methods for adding, updating, and deleting dog entries.

5. **Initialization Data (`repo.h` and `repo.cpp`):**
   - The repository is initialized with a set of sample dog data to provide a starting point for users.

6. **Error Handling (`seconddialog.cpp` and `thirddialog.cpp`):**
   - Both Admin and User dialogs incorporate error handling mechanisms to provide informative messages in case of user input errors or exceptional scenarios.

## How to Use:

1. **Launch the Program:**
   - Run the program to open the main GUI window.

2. **Admin Dialog:**
   - Click the "Admin" button in the main window to access the Admin Dialog.
   - Administrators can perform tasks such as adding, updating, and deleting dog entries.
   - The dialog provides informative error messages for user input errors, ensuring a smooth admin experience.

3. **User Dialog:**
   - Click the "User" button in the main window to access the User Dialog.
   - Explore the list of adopted dogs in a view-only mode.
   - Users can now contribute to the adoption process by adding dogs to an adoption list, enhancing their involvement in the system.



