#include <common/camera.hpp>

Camera::Camera(const glm::vec3 Eye, const glm::vec3 Target)
{
    eye = Eye;
    target = Target;
    // Camera Euler angles
    float yaw = Maths::radians(-90.0f);
    float pitch = 0.0f;
    float roll = 0.0f;
}

void Camera::calculateMatrices()
{
    // Calculate the view matrix
    view = glm::lookAt(eye, eye + front, worldUp);

    // Calculate the projection matrix
    projection = glm::perspective(fov, aspect, near, far);

}
